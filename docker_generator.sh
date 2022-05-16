#!/bin/bash
bibles=(af am ara be bg bn cs da de du en es et fa fi fr gr heb hin hr hu hy is it jap ka kk ko la lt lv mk no pl pt ro ru sk sq sr sv sw tam th tl tr uk ur vi zh)

function comp_bible {
        g++ -g -o $1bible -static main.cpp
}

function gen_dockerfile {
	cat << EOF > Dockerfile
FROM scratch
COPY $1bible /$1bible
ENTRYPOINT [ "/$1bible" ]
EOF
}

function build_docker {
#	docker build -t bible:$1 .
#	wait
#	docker tag bible:$1 registry-1.docker.io/mkoldaev/bible:$1
#	wait
	docker push registry-1.docker.io/mkoldaev/bible:$1
	wait
}

for lang in ${bibles[*]}
do
	cd /work/cpp/bible50cpp/lang/$lang/gen
	printf "making %s\n" $lang
	#comp_bible $lang
	#gen_dockerfile $lang
	build_docker $lang
        wait
done


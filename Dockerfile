FROM scratch
COPY rubible /bible
ENTRYPOINT [ "/bible" ]

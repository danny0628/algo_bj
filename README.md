# Setting
you have to create conda environment!\
` conda create -n flwr ` \
`conda activate flwr`\
`pip install -r requirements.txt`

# Trainging
run python file in a givin order \
`CUDA_VISIBLE_DEVICES={'gpu_id'} python3 server.py`\
`CUDA_VISIBLE_DEVICES={'gpu_id'} python3 client1.py`\
`CUDA_VISIBLE_DEVICES={'gpu_id'} python3 client2.py`

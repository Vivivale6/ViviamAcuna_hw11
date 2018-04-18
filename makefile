pos.png : tray.txt VA_graph.py
	python VA_graph.py
vel.png : tray.txt VA_graph.py
	python VA_graph.py
phase.png : tray.txt VA_graph.py
	python VA_graph.py
tray.txt: VAg
	./VAg > tray.txt
VAg: VA_gravity.cpp
	c++ VA_gravity.cpp -o VAg

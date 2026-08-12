Private Sub btnLoadPhoto_Click(sender As Object, e As EventArgs) Handles btnLoadPhoto_Click
    Dim filePath As String = "C:\Images\sample_photo.jpg"
    
    If System.IO.File.Exists(filePath) Then
        PictureBox1.SizeMode = PictureBoxSizeMode.StretchImage
        PictureBox1.Image = Image.FromFile(filePath)
    Else
        MessageBox.Show("Photo file not found.")
    End If
End Sub

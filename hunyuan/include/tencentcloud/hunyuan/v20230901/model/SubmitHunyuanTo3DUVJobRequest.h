/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DUVJOBREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DUVJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/InputFile3D.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * SubmitHunyuanTo3DUVJob request structure.
                */
                class SubmitHunyuanTo3DUVJobRequest : public AbstractModel
                {
                public:
                    SubmitHunyuanTo3DUVJobRequest();
                    ~SubmitHunyuanTo3DUVJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File URL of the 3D model requiring UV unfold
Supported formats: FBX, OBJ, GLB
3D model limit: less than 30000 faces
                     * @return File File URL of the 3D model requiring UV unfold
Supported formats: FBX, OBJ, GLB
3D model limit: less than 30000 faces
                     * 
                     */
                    InputFile3D GetFile() const;

                    /**
                     * 设置File URL of the 3D model requiring UV unfold
Supported formats: FBX, OBJ, GLB
3D model limit: less than 30000 faces
                     * @param _file File URL of the 3D model requiring UV unfold
Supported formats: FBX, OBJ, GLB
3D model limit: less than 30000 faces
                     * 
                     */
                    void SetFile(const InputFile3D& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                private:

                    /**
                     * File URL of the 3D model requiring UV unfold
Supported formats: FBX, OBJ, GLB
3D model limit: less than 30000 faces
                     */
                    InputFile3D m_file;
                    bool m_fileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SUBMITHUNYUANTO3DUVJOBREQUEST_H_

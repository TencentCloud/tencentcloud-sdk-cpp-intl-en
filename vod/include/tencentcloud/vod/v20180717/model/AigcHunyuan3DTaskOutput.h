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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DTaskOutputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Output information of the AIGC Hunyuan 3D task.
                */
                class AigcHunyuan3DTaskOutput : public AbstractModel
                {
                public:
                    AigcHunyuan3DTaskOutput();
                    ~AigcHunyuan3DTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Output file information for an AIGC Hunyuan 3D task.</p>
                     * @return FileInfos <p>Output file information for an AIGC Hunyuan 3D task.</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DTaskOutputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>Output file information for an AIGC Hunyuan 3D task.</p>
                     * @param _fileInfos <p>Output file information for an AIGC Hunyuan 3D task.</p>
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcHunyuan3DTaskOutputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                private:

                    /**
                     * <p>Output file information for an AIGC Hunyuan 3D task.</p>
                     */
                    std::vector<AigcHunyuan3DTaskOutputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKOUTPUT_H_

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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCFACEINFOASYNCINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCFACEINFOASYNCINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcFaceInputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Asynchronously fetch AIGC face information input.
                */
                class DescribeAigcFaceInfoAsyncInput : public AbstractModel
                {
                public:
                    DescribeAigcFaceInfoAsyncInput();
                    ~DescribeAigcFaceInfoAsyncInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Input video information that needs to get face information.</p>
                     * @return FileInfos <p>Input video information that needs to get face information.</p>
                     * 
                     */
                    std::vector<AigcFaceInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>Input video information that needs to get face information.</p>
                     * @param _fileInfos <p>Input video information that needs to get face information.</p>
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcFaceInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                private:

                    /**
                     * <p>Input video information that needs to get face information.</p>
                     */
                    std::vector<AigcFaceInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCFACEINFOASYNCINPUT_H_

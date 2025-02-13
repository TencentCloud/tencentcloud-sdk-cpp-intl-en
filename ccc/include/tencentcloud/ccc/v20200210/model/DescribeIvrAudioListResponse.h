/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIVRAUDIOLISTRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIVRAUDIOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AudioFileInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeIvrAudioList response structure.
                */
                class DescribeIvrAudioListResponse : public AbstractModel
                {
                public:
                    DescribeIvrAudioListResponse();
                    ~DescribeIvrAudioListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total quantity.
                     * @return TotalCount Total quantity.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取File information.
                     * @return FileInfo File information.
                     * 
                     */
                    std::vector<AudioFileInfo> GetFileInfo() const;

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     * 
                     */
                    bool FileInfoHasBeenSet() const;

                private:

                    /**
                     * Total quantity.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * File information.
                     */
                    std::vector<AudioFileInfo> m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIVRAUDIOLISTRESPONSE_H_

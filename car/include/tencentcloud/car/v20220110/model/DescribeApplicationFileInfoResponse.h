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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONFILEINFORESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONFILEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/UserApplicationFileInfo.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeApplicationFileInfo response structure.
                */
                class DescribeApplicationFileInfoResponse : public AbstractModel
                {
                public:
                    DescribeApplicationFileInfoResponse();
                    ~DescribeApplicationFileInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application file data list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileInfoList Application file data list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UserApplicationFileInfo> GetFileInfoList() const;

                    /**
                     * 判断参数 FileInfoList 是否已赋值
                     * @return FileInfoList 是否已赋值
                     * 
                     */
                    bool FileInfoListHasBeenSet() const;

                private:

                    /**
                     * Application file data list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserApplicationFileInfo> m_fileInfoList;
                    bool m_fileInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONFILEINFORESPONSE_H_

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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBELAKEFSINFORESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBELAKEFSINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/LakeFsInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeLakeFsInfo response structure.
                */
                class DescribeLakeFsInfoResponse : public AbstractModel
                {
                public:
                    DescribeLakeFsInfoResponse();
                    ~DescribeLakeFsInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Managed storage information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LakeFsInfos Managed storage information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<LakeFsInfo> GetLakeFsInfos() const;

                    /**
                     * 判断参数 LakeFsInfos 是否已赋值
                     * @return LakeFsInfos 是否已赋值
                     * 
                     */
                    bool LakeFsInfosHasBeenSet() const;

                private:

                    /**
                     * Managed storage information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<LakeFsInfo> m_lakeFsInfos;
                    bool m_lakeFsInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBELAKEFSINFORESPONSE_H_

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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEADVANCEDSTORELOCATIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEADVANCEDSTORELOCATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeAdvancedStoreLocation response structure.
                */
                class DescribeAdvancedStoreLocationResponse : public AbstractModel
                {
                public:
                    DescribeAdvancedStoreLocationResponse();
                    ~DescribeAdvancedStoreLocationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable advanced settings. 0 means no while 1 means yes.
                     * @return Enable Whether to enable advanced settings. 0 means no while 1 means yes.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取COS path of saving querying results
                     * @return StoreLocation COS path of saving querying results
                     * 
                     */
                    std::string GetStoreLocation() const;

                    /**
                     * 判断参数 StoreLocation 是否已赋值
                     * @return StoreLocation 是否已赋值
                     * 
                     */
                    bool StoreLocationHasBeenSet() const;

                    /**
                     * 获取Whether there is permission for managed storage
                     * @return HasLakeFs Whether there is permission for managed storage
                     * 
                     */
                    bool GetHasLakeFs() const;

                    /**
                     * 判断参数 HasLakeFs 是否已赋值
                     * @return HasLakeFs 是否已赋值
                     * 
                     */
                    bool HasLakeFsHasBeenSet() const;

                    /**
                     * 获取Managed storage status. The value is meaningful only when HasLakeFs is equal to true.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LakeFsStatus Managed storage status. The value is meaningful only when HasLakeFs is equal to true.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLakeFsStatus() const;

                    /**
                     * 判断参数 LakeFsStatus 是否已赋值
                     * @return LakeFsStatus 是否已赋值
                     * 
                     */
                    bool LakeFsStatusHasBeenSet() const;

                private:

                    /**
                     * Whether to enable advanced settings. 0 means no while 1 means yes.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * COS path of saving querying results
                     */
                    std::string m_storeLocation;
                    bool m_storeLocationHasBeenSet;

                    /**
                     * Whether there is permission for managed storage
                     */
                    bool m_hasLakeFs;
                    bool m_hasLakeFsHasBeenSet;

                    /**
                     * Managed storage status. The value is meaningful only when HasLakeFs is equal to true.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lakeFsStatus;
                    bool m_lakeFsStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEADVANCEDSTORELOCATIONRESPONSE_H_

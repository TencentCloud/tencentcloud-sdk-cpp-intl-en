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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYADVANCEDSTORELOCATIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYADVANCEDSTORELOCATIONREQUEST_H_

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
                * ModifyAdvancedStoreLocation request structure.
                */
                class ModifyAdvancedStoreLocationRequest : public AbstractModel
                {
                public:
                    ModifyAdvancedStoreLocationRequest();
                    ~ModifyAdvancedStoreLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取COS path for saving querying results
                     * @return StoreLocation COS path for saving querying results
                     * 
                     */
                    std::string GetStoreLocation() const;

                    /**
                     * 设置COS path for saving querying results
                     * @param _storeLocation COS path for saving querying results
                     * 
                     */
                    void SetStoreLocation(const std::string& _storeLocation);

                    /**
                     * 判断参数 StoreLocation 是否已赋值
                     * @return StoreLocation 是否已赋值
                     * 
                     */
                    bool StoreLocationHasBeenSet() const;

                    /**
                     * 获取Whether to enable advanced settings. 0 means no while 1 means yes.
                     * @return Enable Whether to enable advanced settings. 0 means no while 1 means yes.
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置Whether to enable advanced settings. 0 means no while 1 means yes.
                     * @param _enable Whether to enable advanced settings. 0 means no while 1 means yes.
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * COS path for saving querying results
                     */
                    std::string m_storeLocation;
                    bool m_storeLocationHasBeenSet;

                    /**
                     * Whether to enable advanced settings. 0 means no while 1 means yes.
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYADVANCEDSTORELOCATIONREQUEST_H_

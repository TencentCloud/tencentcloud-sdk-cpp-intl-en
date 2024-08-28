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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBUYBINDTASKREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBUYBINDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateBuyBindTask request structure.
                */
                class CreateBuyBindTaskRequest : public AbstractModel
                {
                public:
                    CreateBuyBindTaskRequest();
                    ~CreateBuyBindTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Order Number
                     * @return DealName Order Number
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Order Number
                     * @param _dealName Order Number
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取Optional parameters. 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription
                     * @return LicenseType Optional parameters. 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置Optional parameters. 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription
                     * @param _licenseType Optional parameters. 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取Machine list
                     * @return QuuidList Machine list
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置Machine list
                     * @param _quuidList Machine list
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取Whether to select all machines
                     * @return IsAll Whether to select all machines
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置Whether to select all machines
                     * @param _isAll Whether to select all machines
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                private:

                    /**
                     * Order Number
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * Optional parameters. 1: Pro Edition-monthly subscription; 2: Ultimate Edition-monthly subscription
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Machine list
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * Whether to select all machines
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEBUYBINDTASKREQUEST_H_

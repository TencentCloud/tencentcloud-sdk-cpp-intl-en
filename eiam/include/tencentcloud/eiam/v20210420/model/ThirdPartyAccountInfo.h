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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_THIRDPARTYACCOUNTINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_THIRDPARTYACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * Third-Party account information.
                */
                class ThirdPartyAccountInfo : public AbstractModel
                {
                public:
                    ThirdPartyAccountInfo();
                    ~ThirdPartyAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Third-Party account code. `2` indicates WeCom account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AccountCode Third-Party account code. `2` indicates WeCom account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccountCode() const;

                    /**
                     * 设置Third-Party account code. `2` indicates WeCom account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _accountCode Third-Party account code. `2` indicates WeCom account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountCode(const std::string& _accountCode);

                    /**
                     * 判断参数 AccountCode 是否已赋值
                     * @return AccountCode 是否已赋值
                     * 
                     */
                    bool AccountCodeHasBeenSet() const;

                    /**
                     * 获取Username of the account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AccountName Username of the account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Username of the account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _accountName Username of the account.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                private:

                    /**
                     * Third-Party account code. `2` indicates WeCom account.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountCode;
                    bool m_accountCodeHasBeenSet;

                    /**
                     * Username of the account.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_THIRDPARTYACCOUNTINFO_H_

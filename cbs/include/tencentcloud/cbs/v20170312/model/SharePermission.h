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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_SHAREPERMISSION_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_SHAREPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Snapshot sharing information set
                */
                class SharePermission : public AbstractModel
                {
                public:
                    SharePermission();
                    ~SharePermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Snapshot sharing time
                     * @return CreatedTime Snapshot sharing time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Snapshot sharing time
                     * @param _createdTime Snapshot sharing time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取ID of the shared account
                     * @return AccountId ID of the shared account
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置ID of the shared account
                     * @param _accountId ID of the shared account
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                private:

                    /**
                     * Snapshot sharing time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * ID of the shared account
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_SHAREPERMISSION_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETACCESSWAY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETACCESSWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos risk identification bucket access rule
                */
                class CosBucketAccessWay : public AbstractModel
                {
                public:
                    CosBucketAccessWay();
                    ~CosBucketAccessWay() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access methods:
specify users
anonymous access allowed
                     * @return AccessType Access methods:
specify users
anonymous access allowed
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Access methods:
specify users
anonymous access allowed
                     * @param _accessType Access methods:
specify users
anonymous access allowed
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Number of users
                     * @return AccessUserCount Number of users
                     * 
                     */
                    int64_t GetAccessUserCount() const;

                    /**
                     * 设置Number of users
                     * @param _accessUserCount Number of users
                     * 
                     */
                    void SetAccessUserCount(const int64_t& _accessUserCount);

                    /**
                     * 判断参数 AccessUserCount 是否已赋值
                     * @return AccessUserCount 是否已赋值
                     * 
                     */
                    bool AccessUserCountHasBeenSet() const;

                    /**
                     * 获取Number of AKs
                     * @return AccessAkCount Number of AKs
                     * 
                     */
                    int64_t GetAccessAkCount() const;

                    /**
                     * 设置Number of AKs
                     * @param _accessAkCount Number of AKs
                     * 
                     */
                    void SetAccessAkCount(const int64_t& _accessAkCount);

                    /**
                     * 判断参数 AccessAkCount 是否已赋值
                     * @return AccessAkCount 是否已赋值
                     * 
                     */
                    bool AccessAkCountHasBeenSet() const;

                    /**
                     * 获取Number of roles
                     * @return AccessRoleCount Number of roles
                     * 
                     */
                    int64_t GetAccessRoleCount() const;

                    /**
                     * 设置Number of roles
                     * @param _accessRoleCount Number of roles
                     * 
                     */
                    void SetAccessRoleCount(const int64_t& _accessRoleCount);

                    /**
                     * 判断参数 AccessRoleCount 是否已赋值
                     * @return AccessRoleCount 是否已赋值
                     * 
                     */
                    bool AccessRoleCountHasBeenSet() const;

                private:

                    /**
                     * Access methods:
specify users
anonymous access allowed
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Number of users
                     */
                    int64_t m_accessUserCount;
                    bool m_accessUserCountHasBeenSet;

                    /**
                     * Number of AKs
                     */
                    int64_t m_accessAkCount;
                    bool m_accessAkCountHasBeenSet;

                    /**
                     * Number of roles
                     */
                    int64_t m_accessRoleCount;
                    bool m_accessRoleCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETACCESSWAY_H_

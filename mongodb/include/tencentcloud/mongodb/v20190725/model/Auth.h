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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_AUTH_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_AUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 
                */
                class Auth : public AbstractModel
                {
                public:
                    Auth();
                    ~Auth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission information of the current account.
- 0: no permissions.
- 1: read-only.
- 3: read-write.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mask Permission information of the current account.
- 0: no permissions.
- 1: read-only.
- 3: read-write.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMask() const;

                    /**
                     * 设置Permission information of the current account.
- 0: no permissions.
- 1: read-only.
- 3: read-write.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mask Permission information of the current account.
- 0: no permissions.
- 1: read-only.
- 3: read-write.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMask(const int64_t& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

                    /**
                     * 获取Specifies the name of the database that has the current account permissions.
- \*: indicates all databases.
- db.name: indicates the database with a specific name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NameSpace Specifies the name of the database that has the current account permissions.
- \*: indicates all databases.
- db.name: indicates the database with a specific name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置Specifies the name of the database that has the current account permissions.
- \*: indicates all databases.
- db.name: indicates the database with a specific name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nameSpace Specifies the name of the database that has the current account permissions.
- \*: indicates all databases.
- db.name: indicates the database with a specific name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                private:

                    /**
                     * Permission information of the current account.
- 0: no permissions.
- 1: read-only.
- 3: read-write.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mask;
                    bool m_maskHasBeenSet;

                    /**
                     * Specifies the name of the database that has the current account permissions.
- \*: indicates all databases.
- db.name: indicates the database with a specific name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_AUTH_H_

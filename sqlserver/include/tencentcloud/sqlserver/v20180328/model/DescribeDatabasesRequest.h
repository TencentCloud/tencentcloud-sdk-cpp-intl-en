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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeDatabases request structure.
                */
                class DescribeDatabasesRequest : public AbstractModel
                {
                public:
                    DescribeDatabasesRequest();
                    ~DescribeDatabasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceIdSet Instance ID
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceIdSet Instance ID
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * @return Limit The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * @param _limit The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Page number in pagination mode. The default value is 0.
                     * @return Offset Page number in pagination mode. The default value is 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page number in pagination mode. The default value is 0.
                     * @param _offset Page number in pagination mode. The default value is 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Database name.
                     * @return Name Database name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Database name.
                     * @param _name Database name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     * @return OrderByType Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     * @param _orderByType Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Whether TDE encryption is enabled. enable - encrypted; disable - unencrypted.
                     * @return Encryption Whether TDE encryption is enabled. enable - encrypted; disable - unencrypted.
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置Whether TDE encryption is enabled. enable - encrypted; disable - unencrypted.
                     * @param _encryption Whether TDE encryption is enabled. enable - encrypted; disable - unencrypted.
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取Sorting field. (Name - sort by name; CreateTime - sort by creation time). The default value is CreateTime.
                     * @return OrderBy Sorting field. (Name - sort by name; CreateTime - sort by creation time). The default value is CreateTime.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting field. (Name - sort by name; CreateTime - sort by creation time). The default value is CreateTime.
                     * @param _orderBy Sorting field. (Name - sort by name; CreateTime - sort by creation time). The default value is CreateTime.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * The number of returned entries per page in pagination mode. Value range: 1-100. The default value is 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number in pagination mode. The default value is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Collation rule (desc - descending order; asc - ascending order). The default value is desc.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Whether TDE encryption is enabled. enable - encrypted; disable - unencrypted.
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * Sorting field. (Name - sort by name; CreateTime - sort by creation time). The default value is CreateTime.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASESREQUEST_H_

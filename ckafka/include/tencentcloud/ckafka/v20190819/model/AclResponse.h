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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Acl.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Set of returned ACL results
                */
                class AclResponse : public AbstractModel
                {
                public:
                    AclResponse();
                    ~AclResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of eligible data entries
                     * @return TotalCount Number of eligible data entries
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of eligible data entries
                     * @param _totalCount Number of eligible data entries
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取ACL list.
                     * @return AclList ACL list.
                     * 
                     */
                    std::vector<Acl> GetAclList() const;

                    /**
                     * 设置ACL list.
                     * @param _aclList ACL list.
                     * 
                     */
                    void SetAclList(const std::vector<Acl>& _aclList);

                    /**
                     * 判断参数 AclList 是否已赋值
                     * @return AclList 是否已赋值
                     * 
                     */
                    bool AclListHasBeenSet() const;

                private:

                    /**
                     * Number of eligible data entries
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * ACL list.
                     */
                    std::vector<Acl> m_aclList;
                    bool m_aclListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ACLRESPONSE_H_

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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DescribeGroup.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * `DescribeGroup` response
                */
                class GroupResponse : public AbstractModel
                {
                public:
                    GroupResponse();
                    ~GroupResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Count
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Count
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Count
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Count
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取GroupList
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return GroupList GroupList
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DescribeGroup> GetGroupList() const;

                    /**
                     * 设置GroupList
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _groupList GroupList
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupList(const std::vector<DescribeGroup>& _groupList);

                    /**
                     * 判断参数 GroupList 是否已赋值
                     * @return GroupList 是否已赋值
                     * 
                     */
                    bool GroupListHasBeenSet() const;

                    /**
                     * 获取Consumer group quota
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupCountQuota Consumer group quota
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetGroupCountQuota() const;

                    /**
                     * 设置Consumer group quota
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupCountQuota Consumer group quota
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGroupCountQuota(const uint64_t& _groupCountQuota);

                    /**
                     * 判断参数 GroupCountQuota 是否已赋值
                     * @return GroupCountQuota 是否已赋值
                     * 
                     */
                    bool GroupCountQuotaHasBeenSet() const;

                private:

                    /**
                     * Count
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * GroupList
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescribeGroup> m_groupList;
                    bool m_groupListHasBeenSet;

                    /**
                     * Consumer group quota
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_groupCountQuota;
                    bool m_groupCountQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_GROUPRESPONSE_H_

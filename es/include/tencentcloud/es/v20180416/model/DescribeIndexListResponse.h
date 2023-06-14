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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/IndexMetaField.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeIndexList response structure.
                */
                class DescribeIndexListResponse : public AbstractModel
                {
                public:
                    DescribeIndexListResponse();
                    ~DescribeIndexListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Index metadata field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IndexMetaFields Index metadata field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<IndexMetaField> GetIndexMetaFields() const;

                    /**
                     * 判断参数 IndexMetaFields 是否已赋值
                     * @return IndexMetaFields 是否已赋值
                     * 
                     */
                    bool IndexMetaFieldsHasBeenSet() const;

                    /**
                     * 获取Total number of results
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TotalCount Total number of results
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Index metadata field
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<IndexMetaField> m_indexMetaFields;
                    bool m_indexMetaFieldsHasBeenSet;

                    /**
                     * Total number of results
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTRESPONSE_H_

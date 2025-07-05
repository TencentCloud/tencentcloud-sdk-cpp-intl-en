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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESNAPSHOTREQUEST_H_

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
                * DescribeMachineSnapshot request structure.
                */
                class DescribeMachineSnapshotRequest : public AbstractModel
                {
                public:
                    DescribeMachineSnapshotRequest();
                    ~DescribeMachineSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CVM ID collection
                     * @return Quuids CVM ID collection
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置CVM ID collection
                     * @param _quuids CVM ID collection
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取Inquiry snapshot type: 0 - latest one; 1 - all
                     * @return Type Inquiry snapshot type: 0 - latest one; 1 - all
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Inquiry snapshot type: 0 - latest one; 1 - all
                     * @param _type Inquiry snapshot type: 0 - latest one; 1 - all
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Number of Pagination
                     * @return Limit Number of Pagination
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of Pagination
                     * @param _limit Number of Pagination
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
                     * 获取Pagination step size
                     * @return Offset Pagination step size
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination step size
                     * @param _offset Pagination step size
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * CVM ID collection
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * Inquiry snapshot type: 0 - latest one; 1 - all
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Number of Pagination
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination step size
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESNAPSHOTREQUEST_H_

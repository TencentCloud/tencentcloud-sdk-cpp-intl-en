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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_LISTMIGRATIONPROJECTREQUEST_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_LISTMIGRATIONPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * ListMigrationProject request structure.
                */
                class ListMigrationProjectRequest : public AbstractModel
                {
                public:
                    ListMigrationProjectRequest();
                    ~ListMigrationProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The initial number of records, default value: 0
                     * @return Offset The initial number of records, default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The initial number of records, default value: 0
                     * @param _offset The initial number of records, default value: 0
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
                     * 获取The number of records returned, default value: 500
                     * @return Limit The number of records returned, default value: 500
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of records returned, default value: 500
                     * @param _limit The number of records returned, default value: 500
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The initial number of records, default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of records returned, default value: 500
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_LISTMIGRATIONPROJECTREQUEST_H_

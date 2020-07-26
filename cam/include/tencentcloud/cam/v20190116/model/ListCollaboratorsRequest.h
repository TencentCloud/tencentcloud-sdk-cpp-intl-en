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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTCOLLABORATORSREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTCOLLABORATORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListCollaborators request structure.
                */
                class ListCollaboratorsRequest : public AbstractModel
                {
                public:
                    ListCollaboratorsRequest();
                    ~ListCollaboratorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of entries per page. Default value: 20
                     * @return Limit Number of entries per page. Default value: 20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Default value: 20
                     * @param Limit Number of entries per page. Default value: 20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination start value. Default value: 0
                     * @return Offset Pagination start value. Default value: 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination start value. Default value: 0
                     * @param Offset Pagination start value. Default value: 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Number of entries per page. Default value: 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination start value. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTCOLLABORATORSREQUEST_H_

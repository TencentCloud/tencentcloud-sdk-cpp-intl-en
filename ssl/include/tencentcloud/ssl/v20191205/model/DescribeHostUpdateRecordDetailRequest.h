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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostUpdateRecordDetail request structure.
                */
                class DescribeHostUpdateRecordDetailRequest : public AbstractModel
                {
                public:
                    DescribeHostUpdateRecordDetailRequest();
                    ~DescribeHostUpdateRecordDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取One-click update record ID
                     * @return DeployRecordId One-click update record ID
                     * 
                     */
                    std::string GetDeployRecordId() const;

                    /**
                     * 设置One-click update record ID
                     * @param _deployRecordId One-click update record ID
                     * 
                     */
                    void SetDeployRecordId(const std::string& _deployRecordId);

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     * 
                     */
                    bool DeployRecordIdHasBeenSet() const;

                    /**
                     * 获取Number per page, 10 by default.
                     * @return Limit Number per page, 10 by default.
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置Number per page, 10 by default.
                     * @param _limit Number per page, 10 by default.
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Paging offset, starting from 0
                     * @return Offset Paging offset, starting from 0
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Paging offset, starting from 0
                     * @param _offset Paging offset, starting from 0
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * One-click update record ID
                     */
                    std::string m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * Number per page, 10 by default.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Paging offset, starting from 0
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_

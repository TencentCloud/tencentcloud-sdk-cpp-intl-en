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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESTANDBYDBINSTANCERELATIONDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESTANDBYDBINSTANCERELATIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/StandbyDBInstanceRelation.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeStandbyDBInstanceRelationDetail response structure.
                */
                class DescribeStandbyDBInstanceRelationDetailResponse : public AbstractModel
                {
                public:
                    DescribeStandbyDBInstanceRelationDetailResponse();
                    ~DescribeStandbyDBInstanceRelationDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Disaster recovery relationship
                     * @return RelationInfos Disaster recovery relationship
                     * 
                     */
                    std::vector<StandbyDBInstanceRelation> GetRelationInfos() const;

                    /**
                     * 判断参数 RelationInfos 是否已赋值
                     * @return RelationInfos 是否已赋值
                     * 
                     */
                    bool RelationInfosHasBeenSet() const;

                private:

                    /**
                     * Disaster recovery relationship
                     */
                    std::vector<StandbyDBInstanceRelation> m_relationInfos;
                    bool m_relationInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESTANDBYDBINSTANCERELATIONDETAILRESPONSE_H_

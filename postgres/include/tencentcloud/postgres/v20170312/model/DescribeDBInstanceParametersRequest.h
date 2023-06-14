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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCEPARAMETERSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCEPARAMETERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceParameters request structure.
                */
                class DescribeDBInstanceParametersRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceParametersRequest();
                    ~DescribeDBInstanceParametersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return DBInstanceId Instance ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _dBInstanceId Instance ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Name of the parameter to be queried. If `ParamName` is left empty or not passed in, the list of all parameters will be returned.
                     * @return ParamName Name of the parameter to be queried. If `ParamName` is left empty or not passed in, the list of all parameters will be returned.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Name of the parameter to be queried. If `ParamName` is left empty or not passed in, the list of all parameters will be returned.
                     * @param _paramName Name of the parameter to be queried. If `ParamName` is left empty or not passed in, the list of all parameters will be returned.
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Name of the parameter to be queried. If `ParamName` is left empty or not passed in, the list of all parameters will be returned.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCEPARAMETERSREQUEST_H_

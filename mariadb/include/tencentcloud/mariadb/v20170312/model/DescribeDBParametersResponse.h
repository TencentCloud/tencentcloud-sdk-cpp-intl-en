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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBPARAMETERSRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBPARAMETERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ParamDesc.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBParameters response structure.
                */
                class DescribeDBParametersResponse : public AbstractModel
                {
                public:
                    DescribeDBParametersResponse();
                    ~DescribeDBParametersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Instance ID in the format of `tdsql-ow728lmc`.
                     * @return InstanceId Instance ID in the format of `tdsql-ow728lmc`.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Requests the current parameter values of database
                     * @return Params Requests the current parameter values of database
                     */
                    std::vector<ParamDesc> GetParams() const;

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of `tdsql-ow728lmc`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Requests the current parameter values of database
                     */
                    std::vector<ParamDesc> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBPARAMETERSRESPONSE_H_
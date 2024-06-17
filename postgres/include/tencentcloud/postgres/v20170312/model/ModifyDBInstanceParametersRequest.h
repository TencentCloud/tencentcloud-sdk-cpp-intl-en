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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEPARAMETERSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEPARAMETERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ParamEntry.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceParameters request structure.
                */
                class ModifyDBInstanceParametersRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceParametersRequest();
                    ~ModifyDBInstanceParametersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return DBInstanceId Instance ID.
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _dBInstanceId Instance ID.
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
                     * 获取Parameters to be modified and expected values.
                     * @return ParamList Parameters to be modified and expected values.
                     * 
                     */
                    std::vector<ParamEntry> GetParamList() const;

                    /**
                     * 设置Parameters to be modified and expected values.
                     * @param _paramList Parameters to be modified and expected values.
                     * 
                     */
                    void SetParamList(const std::vector<ParamEntry>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Parameters to be modified and expected values.
                     */
                    std::vector<ParamEntry> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCEPARAMETERSREQUEST_H_

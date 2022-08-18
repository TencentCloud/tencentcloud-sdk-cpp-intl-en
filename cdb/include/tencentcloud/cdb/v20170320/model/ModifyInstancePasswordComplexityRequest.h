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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPASSWORDCOMPLEXITYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPASSWORDCOMPLEXITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Parameter.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyInstancePasswordComplexity request structure.
                */
                class ModifyInstancePasswordComplexityRequest : public AbstractModel
                {
                public:
                    ModifyInstancePasswordComplexityRequest();
                    ~ModifyInstancePasswordComplexityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID list
                     * @return InstanceIds Instance ID list
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list
                     * @param InstanceIds Instance ID list
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取List of parameters to be modified. Every element is a pair of `Name` (parameter name) and `CurrentValue` (new value).
                     * @return ParamList List of parameters to be modified. Every element is a pair of `Name` (parameter name) and `CurrentValue` (new value).
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置List of parameters to be modified. Every element is a pair of `Name` (parameter name) and `CurrentValue` (new value).
                     * @param ParamList List of parameters to be modified. Every element is a pair of `Name` (parameter name) and `CurrentValue` (new value).
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * Instance ID list
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * List of parameters to be modified. Every element is a pair of `Name` (parameter name) and `CurrentValue` (new value).
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPASSWORDCOMPLEXITYREQUEST_H_

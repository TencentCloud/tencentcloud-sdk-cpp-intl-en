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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_

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
                * ModifyInstanceParam request structure.
                */
                class ModifyInstanceParamRequest : public AbstractModel
                {
                public:
                    ModifyInstanceParamRequest();
                    ~ModifyInstanceParamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of short instance IDs.
                     * @return InstanceIds List of short instance IDs.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of short instance IDs.
                     * @param InstanceIds List of short instance IDs.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取List of parameters to be modified. Every element is a combination of `Name` (parameter name) and `CurrentValue` (new value).
                     * @return ParamList List of parameters to be modified. Every element is a combination of `Name` (parameter name) and `CurrentValue` (new value).
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置List of parameters to be modified. Every element is a combination of `Name` (parameter name) and `CurrentValue` (new value).
                     * @param ParamList List of parameters to be modified. Every element is a combination of `Name` (parameter name) and `CurrentValue` (new value).
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取
                     * @return TemplateId 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置
                     * @param TemplateId 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return WaitSwitch 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置
                     * @param WaitSwitch 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     */
                    bool WaitSwitchHasBeenSet() const;

                private:

                    /**
                     * List of short instance IDs.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * List of parameters to be modified. Every element is a combination of `Name` (parameter name) and `CurrentValue` (new value).
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_

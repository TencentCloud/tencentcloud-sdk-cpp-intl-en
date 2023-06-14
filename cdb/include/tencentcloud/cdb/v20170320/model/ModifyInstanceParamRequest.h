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
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of short instance IDs.
                     * @param _instanceIds List of short instance IDs.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取List of parameters to be modified. Every element is a combination of `Name` (parameter name) and `CurrentValue` (new value).
                     * @return ParamList List of parameters to be modified. Every element is a combination of `Name` (parameter name) and `CurrentValue` (new value).
                     * 
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置List of parameters to be modified. Every element is a combination of `Name` (parameter name) and `CurrentValue` (new value).
                     * @param _paramList List of parameters to be modified. Every element is a combination of `Name` (parameter name) and `CurrentValue` (new value).
                     * 
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取Template ID. At least one of `ParamList` and `TemplateId` must be passed in.
                     * @return TemplateId Template ID. At least one of `ParamList` and `TemplateId` must be passed in.
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID. At least one of `ParamList` and `TemplateId` must be passed in.
                     * @param _templateId Template ID. At least one of `ParamList` and `TemplateId` must be passed in.
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取When to perform the parameter adjustment task. Default value: 0. Valid values: 0 - execute immediately, 1 - execute during window. When its value is 1, only one instance ID can be passed in (i.e., only one `InstanceIds` can be passed in).
                     * @return WaitSwitch When to perform the parameter adjustment task. Default value: 0. Valid values: 0 - execute immediately, 1 - execute during window. When its value is 1, only one instance ID can be passed in (i.e., only one `InstanceIds` can be passed in).
                     * 
                     */
                    int64_t GetWaitSwitch() const;

                    /**
                     * 设置When to perform the parameter adjustment task. Default value: 0. Valid values: 0 - execute immediately, 1 - execute during window. When its value is 1, only one instance ID can be passed in (i.e., only one `InstanceIds` can be passed in).
                     * @param _waitSwitch When to perform the parameter adjustment task. Default value: 0. Valid values: 0 - execute immediately, 1 - execute during window. When its value is 1, only one instance ID can be passed in (i.e., only one `InstanceIds` can be passed in).
                     * 
                     */
                    void SetWaitSwitch(const int64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to sync the parameters to read-only instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     * @return NotSyncRo Whether to sync the parameters to read-only instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     * 
                     */
                    bool GetNotSyncRo() const;

                    /**
                     * 设置Whether to sync the parameters to read-only instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     * @param _notSyncRo Whether to sync the parameters to read-only instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     * 
                     */
                    void SetNotSyncRo(const bool& _notSyncRo);

                    /**
                     * 判断参数 NotSyncRo 是否已赋值
                     * @return NotSyncRo 是否已赋值
                     * 
                     */
                    bool NotSyncRoHasBeenSet() const;

                    /**
                     * 获取Whether to sync the parameters to disaster recovery instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     * @return NotSyncDr Whether to sync the parameters to disaster recovery instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     * 
                     */
                    bool GetNotSyncDr() const;

                    /**
                     * 设置Whether to sync the parameters to disaster recovery instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     * @param _notSyncDr Whether to sync the parameters to disaster recovery instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     * 
                     */
                    void SetNotSyncDr(const bool& _notSyncDr);

                    /**
                     * 判断参数 NotSyncDr 是否已赋值
                     * @return NotSyncDr 是否已赋值
                     * 
                     */
                    bool NotSyncDrHasBeenSet() const;

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
                     * Template ID. At least one of `ParamList` and `TemplateId` must be passed in.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * When to perform the parameter adjustment task. Default value: 0. Valid values: 0 - execute immediately, 1 - execute during window. When its value is 1, only one instance ID can be passed in (i.e., only one `InstanceIds` can be passed in).
                     */
                    int64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                    /**
                     * Whether to sync the parameters to read-only instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     */
                    bool m_notSyncRo;
                    bool m_notSyncRoHasBeenSet;

                    /**
                     * Whether to sync the parameters to disaster recovery instance of the source instance. Valid values: `true` (not sync), `false` (sync). Default value: `false`.
                     */
                    bool m_notSyncDr;
                    bool m_notSyncDrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_

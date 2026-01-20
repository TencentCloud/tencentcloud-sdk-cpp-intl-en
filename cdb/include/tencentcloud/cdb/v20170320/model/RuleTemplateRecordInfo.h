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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RULETEMPLATERECORDINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RULETEMPLATERECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RuleTemplateInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Rule template change history.
                */
                class RuleTemplateRecordInfo : public AbstractModel
                {
                public:
                    RuleTemplateRecordInfo();
                    ~RuleTemplateRecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Details of the original rule template.
                     * @return ModifyBeforeInfo Details of the original rule template.
                     * 
                     */
                    RuleTemplateInfo GetModifyBeforeInfo() const;

                    /**
                     * 设置Details of the original rule template.
                     * @param _modifyBeforeInfo Details of the original rule template.
                     * 
                     */
                    void SetModifyBeforeInfo(const RuleTemplateInfo& _modifyBeforeInfo);

                    /**
                     * 判断参数 ModifyBeforeInfo 是否已赋值
                     * @return ModifyBeforeInfo 是否已赋值
                     * 
                     */
                    bool ModifyBeforeInfoHasBeenSet() const;

                    /**
                     * 获取Details of the modified rule template.
                     * @return ModifyAfterInfo Details of the modified rule template.
                     * 
                     */
                    RuleTemplateInfo GetModifyAfterInfo() const;

                    /**
                     * 设置Details of the modified rule template.
                     * @param _modifyAfterInfo Details of the modified rule template.
                     * 
                     */
                    void SetModifyAfterInfo(const RuleTemplateInfo& _modifyAfterInfo);

                    /**
                     * 判断参数 ModifyAfterInfo 是否已赋值
                     * @return ModifyAfterInfo 是否已赋值
                     * 
                     */
                    bool ModifyAfterInfoHasBeenSet() const;

                    /**
                     * 获取Affected instances.
                     * @return AffectedInstances Affected instances.
                     * 
                     */
                    std::vector<std::string> GetAffectedInstances() const;

                    /**
                     * 设置Affected instances.
                     * @param _affectedInstances Affected instances.
                     * 
                     */
                    void SetAffectedInstances(const std::vector<std::string>& _affectedInstances);

                    /**
                     * 判断参数 AffectedInstances 是否已赋值
                     * @return AffectedInstances 是否已赋值
                     * 
                     */
                    bool AffectedInstancesHasBeenSet() const;

                    /**
                     * 获取Operator (account UIN).
                     * @return Operator Operator (account UIN).
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator (account UIN).
                     * @param _operator Operator (account UIN).
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Time of the change.
                     * @return UpdateTime Time of the change.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Time of the change.
                     * @param _updateTime Time of the change.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Details of the original rule template.
                     */
                    RuleTemplateInfo m_modifyBeforeInfo;
                    bool m_modifyBeforeInfoHasBeenSet;

                    /**
                     * Details of the modified rule template.
                     */
                    RuleTemplateInfo m_modifyAfterInfo;
                    bool m_modifyAfterInfoHasBeenSet;

                    /**
                     * Affected instances.
                     */
                    std::vector<std::string> m_affectedInstances;
                    bool m_affectedInstancesHasBeenSet;

                    /**
                     * Operator (account UIN).
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Time of the change.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RULETEMPLATERECORDINFO_H_

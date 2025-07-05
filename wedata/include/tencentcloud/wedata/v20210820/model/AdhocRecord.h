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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ADHOCRECORD_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ADHOCRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Submission Record
                */
                class AdhocRecord : public AbstractModel
                {
                public:
                    AdhocRecord();
                    ~AdhocRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task Submission Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Task Submission Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Task Submission Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Task Submission Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Script ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ScriptContent Script ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Script ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _scriptContent Script ContentNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取Task Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Task Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Task Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _status Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceId Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceId Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Task Submission Record ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Script ContentNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * Task Submission Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task StatusNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ADHOCRECORD_H_

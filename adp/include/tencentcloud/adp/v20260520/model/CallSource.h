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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CALLSOURCE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CALLSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Call source
                */
                class CallSource : public AbstractModel
                {
                public:
                    CallSource();
                    ~CallSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Caller ID, whose meaning is determined by subject_type (such as app_id, kb_id)</p>
                     * @return SubjectId <p>Caller ID, whose meaning is determined by subject_type (such as app_id, kb_id)</p>
                     * 
                     */
                    std::string GetSubjectId() const;

                    /**
                     * 设置<p>Caller ID, whose meaning is determined by subject_type (such as app_id, kb_id)</p>
                     * @param _subjectId <p>Caller ID, whose meaning is determined by subject_type (such as app_id, kb_id)</p>
                     * 
                     */
                    void SetSubjectId(const std::string& _subjectId);

                    /**
                     * 判断参数 SubjectId 是否已赋值
                     * @return SubjectId 是否已赋值
                     * 
                     */
                    bool SubjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Name of the calling entity</p>
                     * @return SubjectName <p>Name of the calling entity</p>
                     * 
                     */
                    std::string GetSubjectName() const;

                    /**
                     * 设置<p>Name of the calling entity</p>
                     * @param _subjectName <p>Name of the calling entity</p>
                     * 
                     */
                    void SetSubjectName(const std::string& _subjectName);

                    /**
                     * 判断参数 SubjectName 是否已赋值
                     * @return SubjectName 是否已赋值
                     * 
                     */
                    bool SubjectNameHasBeenSet() const;

                    /**
                     * 获取<p>Caller type: APP/KB/WIDGET/OPEN_CLAW/KB_RECALL_TEST/WORKBENCH/MODEL_API</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>Application development</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>Knowledge base</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>Knowledge base recall test</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>Intelligent workbench</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>Model API call</td></tr></tbody></table>
                     * @return SubjectType <p>Caller type: APP/KB/WIDGET/OPEN_CLAW/KB_RECALL_TEST/WORKBENCH/MODEL_API</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>Application development</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>Knowledge base</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>Knowledge base recall test</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>Intelligent workbench</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>Model API call</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetSubjectType() const;

                    /**
                     * 设置<p>Caller type: APP/KB/WIDGET/OPEN_CLAW/KB_RECALL_TEST/WORKBENCH/MODEL_API</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>Application development</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>Knowledge base</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>Knowledge base recall test</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>Intelligent workbench</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>Model API call</td></tr></tbody></table>
                     * @param _subjectType <p>Caller type: APP/KB/WIDGET/OPEN_CLAW/KB_RECALL_TEST/WORKBENCH/MODEL_API</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>Application development</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>Knowledge base</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>Knowledge base recall test</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>Intelligent workbench</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>Model API call</td></tr></tbody></table>
                     * 
                     */
                    void SetSubjectType(const int64_t& _subjectType);

                    /**
                     * 判断参数 SubjectType 是否已赋值
                     * @return SubjectType 是否已赋值
                     * 
                     */
                    bool SubjectTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Caller ID, whose meaning is determined by subject_type (such as app_id, kb_id)</p>
                     */
                    std::string m_subjectId;
                    bool m_subjectIdHasBeenSet;

                    /**
                     * <p>Name of the calling entity</p>
                     */
                    std::string m_subjectName;
                    bool m_subjectNameHasBeenSet;

                    /**
                     * <p>Caller type: APP/KB/WIDGET/OPEN_CLAW/KB_RECALL_TEST/WORKBENCH/MODEL_API</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>METRIC_SOURCE_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>METRIC_SOURCE_TYPE_APP</td><td>1</td><td>Application development</td></tr><tr><td>METRIC_SOURCE_TYPE_KB</td><td>2</td><td>Knowledge base</td></tr><tr><td>METRIC_SOURCE_TYPE_WIDGET</td><td>3</td><td>Widget</td></tr><tr><td>METRIC_SOURCE_TYPE_OPEN_CLAW</td><td>4</td><td>ClawPro</td></tr><tr><td>METRIC_SOURCE_TYPE_KB_RECALL_TEST</td><td>5</td><td>Knowledge base recall test</td></tr><tr><td>METRIC_SOURCE_TYPE_WORKBENCH</td><td>6</td><td>Intelligent workbench</td></tr><tr><td>METRIC_SOURCE_TYPE_MODEL_API</td><td>7</td><td>Model API call</td></tr></tbody></table>
                     */
                    int64_t m_subjectType;
                    bool m_subjectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CALLSOURCE_H_

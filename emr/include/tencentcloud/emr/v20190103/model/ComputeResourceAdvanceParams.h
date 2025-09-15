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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_COMPUTERESOURCEADVANCEPARAMS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_COMPUTERESOURCEADVANCEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/TkeLabel.h>
#include <tencentcloud/emr/v20190103/model/Taint.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Advanced settings of computing resources.
                */
                class ComputeResourceAdvanceParams : public AbstractModel
                {
                public:
                    ComputeResourceAdvanceParams();
                    ~ComputeResourceAdvanceParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node label array.
                     * @return Labels Node label array.
                     * 
                     */
                    std::vector<TkeLabel> GetLabels() const;

                    /**
                     * 设置Node label array.
                     * @param _labels Node label array.
                     * 
                     */
                    void SetLabels(const std::vector<TkeLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Node taint.
                     * @return Taints Node taint.
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Node taint.
                     * @param _taints Node taint.
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取Base64-encoded user script: executed before node initializing.
                     * @return PreStartUserScript Base64-encoded user script: executed before node initializing.
                     * 
                     */
                    std::string GetPreStartUserScript() const;

                    /**
                     * 设置Base64-encoded user script: executed before node initializing.
                     * @param _preStartUserScript Base64-encoded user script: executed before node initializing.
                     * 
                     */
                    void SetPreStartUserScript(const std::string& _preStartUserScript);

                    /**
                     * 判断参数 PreStartUserScript 是否已赋值
                     * @return PreStartUserScript 是否已赋值
                     * 
                     */
                    bool PreStartUserScriptHasBeenSet() const;

                    /**
                     * 获取Base64-encoded user script. This script executes after Kubernetes components initialize. Users should ensure script reentrancy and implement retry logic. Both the script and its generated log files are accessible at the node path: /data/ccs_userscript/.
                     * @return UserScript Base64-encoded user script. This script executes after Kubernetes components initialize. Users should ensure script reentrancy and implement retry logic. Both the script and its generated log files are accessible at the node path: /data/ccs_userscript/.
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置Base64-encoded user script. This script executes after Kubernetes components initialize. Users should ensure script reentrancy and implement retry logic. Both the script and its generated log files are accessible at the node path: /data/ccs_userscript/.
                     * @param _userScript Base64-encoded user script. This script executes after Kubernetes components initialize. Users should ensure script reentrancy and implement retry logic. Both the script and its generated log files are accessible at the node path: /data/ccs_userscript/.
                     * 
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     * 
                     */
                    bool UserScriptHasBeenSet() const;

                private:

                    /**
                     * Node label array.
                     */
                    std::vector<TkeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Node taint.
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * Base64-encoded user script: executed before node initializing.
                     */
                    std::string m_preStartUserScript;
                    bool m_preStartUserScriptHasBeenSet;

                    /**
                     * Base64-encoded user script. This script executes after Kubernetes components initialize. Users should ensure script reentrancy and implement retry logic. Both the script and its generated log files are accessible at the node path: /data/ccs_userscript/.
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_COMPUTERESOURCEADVANCEPARAMS_H_

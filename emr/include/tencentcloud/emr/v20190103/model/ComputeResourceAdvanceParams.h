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
                     * 获取<p>Node Label array.</p>
                     * @return Labels <p>Node Label array.</p>
                     * 
                     */
                    std::vector<TkeLabel> GetLabels() const;

                    /**
                     * 设置<p>Node Label array.</p>
                     * @param _labels <p>Node Label array.</p>
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
                     * 获取<p>Node taint.</p>
                     * @return Taints <p>Node taint.</p>
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置<p>Node taint.</p>
                     * @param _taints <p>Node taint.</p>
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
                     * 获取<p>Base64-encoded user script, which is executed before node initialization.</p>
                     * @return PreStartUserScript <p>Base64-encoded user script, which is executed before node initialization.</p>
                     * 
                     */
                    std::string GetPreStartUserScript() const;

                    /**
                     * 设置<p>Base64-encoded user script, which is executed before node initialization.</p>
                     * @param _preStartUserScript <p>Base64-encoded user script, which is executed before node initialization.</p>
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
                     * 获取<p>Base64-encoded user script, which is executed after the Kubernetes component starts. You need to guarantee the script reentrancy and retry logic. The script and generated log files can be viewed in the /data/ccs_userscript/ directory on the node.</p>
                     * @return UserScript <p>Base64-encoded user script, which is executed after the Kubernetes component starts. You need to guarantee the script reentrancy and retry logic. The script and generated log files can be viewed in the /data/ccs_userscript/ directory on the node.</p>
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置<p>Base64-encoded user script, which is executed after the Kubernetes component starts. You need to guarantee the script reentrancy and retry logic. The script and generated log files can be viewed in the /data/ccs_userscript/ directory on the node.</p>
                     * @param _userScript <p>Base64-encoded user script, which is executed after the Kubernetes component starts. You need to guarantee the script reentrancy and retry logic. The script and generated log files can be viewed in the /data/ccs_userscript/ directory on the node.</p>
                     * 
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     * 
                     */
                    bool UserScriptHasBeenSet() const;

                    /**
                     * 获取<p>Node group ID.</p>
                     * @return TkeClusterNodePool <p>Node group ID.</p>
                     * 
                     */
                    std::string GetTkeClusterNodePool() const;

                    /**
                     * 设置<p>Node group ID.</p>
                     * @param _tkeClusterNodePool <p>Node group ID.</p>
                     * 
                     */
                    void SetTkeClusterNodePool(const std::string& _tkeClusterNodePool);

                    /**
                     * 判断参数 TkeClusterNodePool 是否已赋值
                     * @return TkeClusterNodePool 是否已赋值
                     * 
                     */
                    bool TkeClusterNodePoolHasBeenSet() const;

                    /**
                     * 获取<p>Mode of joining a node pool.</p><p>Enumeration values:</p><ul><li>Inherit: inherits the configuration from the node pool.</li><li>OnlyJoin: joins the node pool only without inheriting the configuration.</li></ul><p>Default value: Inherit.</p>
                     * @return NodePoolJoinMode <p>Mode of joining a node pool.</p><p>Enumeration values:</p><ul><li>Inherit: inherits the configuration from the node pool.</li><li>OnlyJoin: joins the node pool only without inheriting the configuration.</li></ul><p>Default value: Inherit.</p>
                     * 
                     */
                    std::string GetNodePoolJoinMode() const;

                    /**
                     * 设置<p>Mode of joining a node pool.</p><p>Enumeration values:</p><ul><li>Inherit: inherits the configuration from the node pool.</li><li>OnlyJoin: joins the node pool only without inheriting the configuration.</li></ul><p>Default value: Inherit.</p>
                     * @param _nodePoolJoinMode <p>Mode of joining a node pool.</p><p>Enumeration values:</p><ul><li>Inherit: inherits the configuration from the node pool.</li><li>OnlyJoin: joins the node pool only without inheriting the configuration.</li></ul><p>Default value: Inherit.</p>
                     * 
                     */
                    void SetNodePoolJoinMode(const std::string& _nodePoolJoinMode);

                    /**
                     * 判断参数 NodePoolJoinMode 是否已赋值
                     * @return NodePoolJoinMode 是否已赋值
                     * 
                     */
                    bool NodePoolJoinModeHasBeenSet() const;

                private:

                    /**
                     * <p>Node Label array.</p>
                     */
                    std::vector<TkeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Node taint.</p>
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * <p>Base64-encoded user script, which is executed before node initialization.</p>
                     */
                    std::string m_preStartUserScript;
                    bool m_preStartUserScriptHasBeenSet;

                    /**
                     * <p>Base64-encoded user script, which is executed after the Kubernetes component starts. You need to guarantee the script reentrancy and retry logic. The script and generated log files can be viewed in the /data/ccs_userscript/ directory on the node.</p>
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * <p>Node group ID.</p>
                     */
                    std::string m_tkeClusterNodePool;
                    bool m_tkeClusterNodePoolHasBeenSet;

                    /**
                     * <p>Mode of joining a node pool.</p><p>Enumeration values:</p><ul><li>Inherit: inherits the configuration from the node pool.</li><li>OnlyJoin: joins the node pool only without inheriting the configuration.</li></ul><p>Default value: Inherit.</p>
                     */
                    std::string m_nodePoolJoinMode;
                    bool m_nodePoolJoinModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_COMPUTERESOURCEADVANCEPARAMS_H_

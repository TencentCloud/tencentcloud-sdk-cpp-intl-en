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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCRIPTBOOTSTRAPACTIONCONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCRIPTBOOTSTRAPACTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Bootstrap addition.
                */
                class ScriptBootstrapActionConfig : public AbstractModel
                {
                public:
                    ScriptBootstrapActionConfig();
                    ~ScriptBootstrapActionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取COS address of the script. Format: https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh. To query the COS bucket list, refer to [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     * @return CosFileURI COS address of the script. Format: https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh. To query the COS bucket list, refer to [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     * 
                     */
                    std::string GetCosFileURI() const;

                    /**
                     * 设置COS address of the script. Format: https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh. To query the COS bucket list, refer to [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     * @param _cosFileURI COS address of the script. Format: https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh. To query the COS bucket list, refer to [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     * 
                     */
                    void SetCosFileURI(const std::string& _cosFileURI);

                    /**
                     * 判断参数 CosFileURI 是否已赋值
                     * @return CosFileURI 是否已赋值
                     * 
                     */
                    bool CosFileURIHasBeenSet() const;

                    /**
                     * 获取Time range for the bootstrap script execution.
<li>resourceAfter: after node initialization</li>
<li>clusterAfter: after cluster startup</li>
<li>clusterBefore: before cluster startup</li>
                     * @return ExecutionMoment Time range for the bootstrap script execution.
<li>resourceAfter: after node initialization</li>
<li>clusterAfter: after cluster startup</li>
<li>clusterBefore: before cluster startup</li>
                     * 
                     */
                    std::string GetExecutionMoment() const;

                    /**
                     * 设置Time range for the bootstrap script execution.
<li>resourceAfter: after node initialization</li>
<li>clusterAfter: after cluster startup</li>
<li>clusterBefore: before cluster startup</li>
                     * @param _executionMoment Time range for the bootstrap script execution.
<li>resourceAfter: after node initialization</li>
<li>clusterAfter: after cluster startup</li>
<li>clusterBefore: before cluster startup</li>
                     * 
                     */
                    void SetExecutionMoment(const std::string& _executionMoment);

                    /**
                     * 判断参数 ExecutionMoment 是否已赋值
                     * @return ExecutionMoment 是否已赋值
                     * 
                     */
                    bool ExecutionMomentHasBeenSet() const;

                    /**
                     * 获取Execution script parameters. For the parameter format, follow standard Shell specifications.
                     * @return Args Execution script parameters. For the parameter format, follow standard Shell specifications.
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置Execution script parameters. For the parameter format, follow standard Shell specifications.
                     * @param _args Execution script parameters. For the parameter format, follow standard Shell specifications.
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取Script file name.
                     * @return CosFileName Script file name.
                     * 
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置Script file name.
                     * @param _cosFileName Script file name.
                     * 
                     */
                    void SetCosFileName(const std::string& _cosFileName);

                    /**
                     * 判断参数 CosFileName 是否已赋值
                     * @return CosFileName 是否已赋值
                     * 
                     */
                    bool CosFileNameHasBeenSet() const;

                    /**
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * COS address of the script. Format: https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh. To query the COS bucket list, refer to [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     */
                    std::string m_cosFileURI;
                    bool m_cosFileURIHasBeenSet;

                    /**
                     * Time range for the bootstrap script execution.
<li>resourceAfter: after node initialization</li>
<li>clusterAfter: after cluster startup</li>
<li>clusterBefore: before cluster startup</li>
                     */
                    std::string m_executionMoment;
                    bool m_executionMomentHasBeenSet;

                    /**
                     * Execution script parameters. For the parameter format, follow standard Shell specifications.
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * Script file name.
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCRIPTBOOTSTRAPACTIONCONFIG_H_

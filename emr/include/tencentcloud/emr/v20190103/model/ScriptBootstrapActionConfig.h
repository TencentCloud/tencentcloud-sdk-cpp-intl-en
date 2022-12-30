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
                * The bootstrap action.
                */
                class ScriptBootstrapActionConfig : public AbstractModel
                {
                public:
                    ScriptBootstrapActionConfig();
                    ~ScriptBootstrapActionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The COS URL of the script, in the format of `https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh`. For the COS bucket list, see [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     * @return CosFileURI The COS URL of the script, in the format of `https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh`. For the COS bucket list, see [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     */
                    std::string GetCosFileURI() const;

                    /**
                     * 设置The COS URL of the script, in the format of `https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh`. For the COS bucket list, see [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     * @param CosFileURI The COS URL of the script, in the format of `https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh`. For the COS bucket list, see [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     */
                    void SetCosFileURI(const std::string& _cosFileURI);

                    /**
                     * 判断参数 CosFileURI 是否已赋值
                     * @return CosFileURI 是否已赋值
                     */
                    bool CosFileURIHasBeenSet() const;

                    /**
                     * 获取The execution time of the bootstrap action script. Valid values:
<li>`resourceAfter`: After node initialization</li>
<li>`clusterAfter`: After cluster start</li>
<li>`clusterBefore`: Before cluster start</li>
                     * @return ExecutionMoment The execution time of the bootstrap action script. Valid values:
<li>`resourceAfter`: After node initialization</li>
<li>`clusterAfter`: After cluster start</li>
<li>`clusterBefore`: Before cluster start</li>
                     */
                    std::string GetExecutionMoment() const;

                    /**
                     * 设置The execution time of the bootstrap action script. Valid values:
<li>`resourceAfter`: After node initialization</li>
<li>`clusterAfter`: After cluster start</li>
<li>`clusterBefore`: Before cluster start</li>
                     * @param ExecutionMoment The execution time of the bootstrap action script. Valid values:
<li>`resourceAfter`: After node initialization</li>
<li>`clusterAfter`: After cluster start</li>
<li>`clusterBefore`: Before cluster start</li>
                     */
                    void SetExecutionMoment(const std::string& _executionMoment);

                    /**
                     * 判断参数 ExecutionMoment 是否已赋值
                     * @return ExecutionMoment 是否已赋值
                     */
                    bool ExecutionMomentHasBeenSet() const;

                    /**
                     * 获取The execution script parameter. The parameter format must comply with standard shell specifications.
                     * @return Args The execution script parameter. The parameter format must comply with standard shell specifications.
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置The execution script parameter. The parameter format must comply with standard shell specifications.
                     * @param Args The execution script parameter. The parameter format must comply with standard shell specifications.
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取The script file name.
                     * @return CosFileName The script file name.
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置The script file name.
                     * @param CosFileName The script file name.
                     */
                    void SetCosFileName(const std::string& _cosFileName);

                    /**
                     * 判断参数 CosFileName 是否已赋值
                     * @return CosFileName 是否已赋值
                     */
                    bool CosFileNameHasBeenSet() const;

                private:

                    /**
                     * The COS URL of the script, in the format of `https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh`. For the COS bucket list, see [Bucket List](https://console.cloud.tencent.com/cos/bucket).
                     */
                    std::string m_cosFileURI;
                    bool m_cosFileURIHasBeenSet;

                    /**
                     * The execution time of the bootstrap action script. Valid values:
<li>`resourceAfter`: After node initialization</li>
<li>`clusterAfter`: After cluster start</li>
<li>`clusterBefore`: Before cluster start</li>
                     */
                    std::string m_executionMoment;
                    bool m_executionMomentHasBeenSet;

                    /**
                     * The execution script parameter. The parameter format must comply with standard shell specifications.
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * The script file name.
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCRIPTBOOTSTRAPACTIONCONFIG_H_

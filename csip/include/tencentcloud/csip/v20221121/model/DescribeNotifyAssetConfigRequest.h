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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENOTIFYASSETCONFIGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENOTIFYASSETCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeNotifyAssetConfig request structure.
                */
                class DescribeNotifyAssetConfigRequest : public AbstractModel
                {
                public:
                    DescribeNotifyAssetConfigRequest();
                    ~DescribeNotifyAssetConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Module name.</p>
                     * @return Modules <p>Module name.</p>
                     * 
                     */
                    std::vector<std::string> GetModules() const;

                    /**
                     * 设置<p>Module name.</p>
                     * @param _modules <p>Module name.</p>
                     * 
                     */
                    void SetModules(const std::vector<std::string>& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     * 
                     */
                    bool ModulesHasBeenSet() const;

                private:

                    /**
                     * <p>Module name.</p>
                     */
                    std::vector<std::string> m_modules;
                    bool m_modulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBENOTIFYASSETCONFIGREQUEST_H_

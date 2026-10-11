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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTRSP_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Bootstrap script response package.
                */
                class DescribeBootScriptRsp : public AbstractModel
                {
                public:
                    DescribeBootScriptRsp();
                    ~DescribeBootScriptRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom script file when resource initialization ends.
                     * @return ResourceAfter Custom script file when resource initialization ends.
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetResourceAfter() const;

                    /**
                     * 设置Custom script file when resource initialization ends.
                     * @param _resourceAfter Custom script file when resource initialization ends.
                     * 
                     */
                    void SetResourceAfter(const std::vector<PreExecuteFileSetting>& _resourceAfter);

                    /**
                     * 判断参数 ResourceAfter 是否已赋值
                     * @return ResourceAfter 是否已赋值
                     * 
                     */
                    bool ResourceAfterHasBeenSet() const;

                    /**
                     * 获取Custom script file before cluster startup.
                     * @return ClusterBefore Custom script file before cluster startup.
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetClusterBefore() const;

                    /**
                     * 设置Custom script file before cluster startup.
                     * @param _clusterBefore Custom script file before cluster startup.
                     * 
                     */
                    void SetClusterBefore(const std::vector<PreExecuteFileSetting>& _clusterBefore);

                    /**
                     * 判断参数 ClusterBefore 是否已赋值
                     * @return ClusterBefore 是否已赋值
                     * 
                     */
                    bool ClusterBeforeHasBeenSet() const;

                    /**
                     * 获取Custom script file after cluster startup.
                     * @return ClusterAfter Custom script file after cluster startup.
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetClusterAfter() const;

                    /**
                     * 设置Custom script file after cluster startup.
                     * @param _clusterAfter Custom script file after cluster startup.
                     * 
                     */
                    void SetClusterAfter(const std::vector<PreExecuteFileSetting>& _clusterAfter);

                    /**
                     * 判断参数 ClusterAfter 是否已赋值
                     * @return ClusterAfter 是否已赋值
                     * 
                     */
                    bool ClusterAfterHasBeenSet() const;

                    /**
                     * 获取Custom script before service decommissioning.
                     * @return ServiceBefore Custom script before service decommissioning.
                     * 
                     */
                    std::vector<PreExecuteFileSetting> GetServiceBefore() const;

                    /**
                     * 设置Custom script before service decommissioning.
                     * @param _serviceBefore Custom script before service decommissioning.
                     * 
                     */
                    void SetServiceBefore(const std::vector<PreExecuteFileSetting>& _serviceBefore);

                    /**
                     * 判断参数 ServiceBefore 是否已赋值
                     * @return ServiceBefore 是否已赋值
                     * 
                     */
                    bool ServiceBeforeHasBeenSet() const;

                private:

                    /**
                     * Custom script file when resource initialization ends.
                     */
                    std::vector<PreExecuteFileSetting> m_resourceAfter;
                    bool m_resourceAfterHasBeenSet;

                    /**
                     * Custom script file before cluster startup.
                     */
                    std::vector<PreExecuteFileSetting> m_clusterBefore;
                    bool m_clusterBeforeHasBeenSet;

                    /**
                     * Custom script file after cluster startup.
                     */
                    std::vector<PreExecuteFileSetting> m_clusterAfter;
                    bool m_clusterAfterHasBeenSet;

                    /**
                     * Custom script before service decommissioning.
                     */
                    std::vector<PreExecuteFileSetting> m_serviceBefore;
                    bool m_serviceBeforeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTRSP_H_

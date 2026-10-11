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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeBootScript request structure.
                */
                class DescribeBootScriptRequest : public AbstractModel
                {
                public:
                    DescribeBootScriptRequest();
                    ~DescribeBootScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR instance SN.
                     * @return InstanceId EMR instance SN.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR instance SN.
                     * @param _instanceId EMR instance SN.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore. If this field is left empty, all timings are included.
                     * @return BootType Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore. If this field is left empty, all timings are included.
                     * 
                     */
                    std::string GetBootType() const;

                    /**
                     * 设置Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore. If this field is left empty, all timings are included.
                     * @param _bootType Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore. If this field is left empty, all timings are included.
                     * 
                     */
                    void SetBootType(const std::string& _bootType);

                    /**
                     * 判断参数 BootType 是否已赋值
                     * @return BootType 是否已赋值
                     * 
                     */
                    bool BootTypeHasBeenSet() const;

                private:

                    /**
                     * EMR instance SN.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Bootstrap script type. Valid values: resourceAfter, clusterAfter, and clusterBefore. If this field is left empty, all timings are included.
                     */
                    std::string m_bootType;
                    bool m_bootTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTREQUEST_H_

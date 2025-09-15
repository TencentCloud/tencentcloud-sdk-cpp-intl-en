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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTSERVICECONFGROUPSINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTSERVICECONFGROUPSINFO_H_

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
                * Configuration group specified for scale-out.
                */
                class ScaleOutServiceConfGroupsInfo : public AbstractModel
                {
                public:
                    ScaleOutServiceConfGroupsInfo();
                    ~ScaleOutServiceConfGroupsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component version name, for example, HDFS-2.8.5.
                     * @return ServiceComponentName Component version name, for example, HDFS-2.8.5.
                     * 
                     */
                    std::string GetServiceComponentName() const;

                    /**
                     * 设置Component version name, for example, HDFS-2.8.5.
                     * @param _serviceComponentName Component version name, for example, HDFS-2.8.5.
                     * 
                     */
                    void SetServiceComponentName(const std::string& _serviceComponentName);

                    /**
                     * 判断参数 ServiceComponentName 是否已赋值
                     * @return ServiceComponentName 是否已赋值
                     * 
                     */
                    bool ServiceComponentNameHasBeenSet() const;

                    /**
                     * 获取Configuration group name, for example, hdfs-core-defaultGroup. If the ConfGroupName parameter is passed in, the configuration group dimension is used.
                                                             If the ConfGroupName parameter is not passed in, the cluster dimension is used.
                     * @return ConfGroupName Configuration group name, for example, hdfs-core-defaultGroup. If the ConfGroupName parameter is passed in, the configuration group dimension is used.
                                                             If the ConfGroupName parameter is not passed in, the cluster dimension is used.
                     * 
                     */
                    std::string GetConfGroupName() const;

                    /**
                     * 设置Configuration group name, for example, hdfs-core-defaultGroup. If the ConfGroupName parameter is passed in, the configuration group dimension is used.
                                                             If the ConfGroupName parameter is not passed in, the cluster dimension is used.
                     * @param _confGroupName Configuration group name, for example, hdfs-core-defaultGroup. If the ConfGroupName parameter is passed in, the configuration group dimension is used.
                                                             If the ConfGroupName parameter is not passed in, the cluster dimension is used.
                     * 
                     */
                    void SetConfGroupName(const std::string& _confGroupName);

                    /**
                     * 判断参数 ConfGroupName 是否已赋值
                     * @return ConfGroupName 是否已赋值
                     * 
                     */
                    bool ConfGroupNameHasBeenSet() const;

                private:

                    /**
                     * Component version name, for example, HDFS-2.8.5.
                     */
                    std::string m_serviceComponentName;
                    bool m_serviceComponentNameHasBeenSet;

                    /**
                     * Configuration group name, for example, hdfs-core-defaultGroup. If the ConfGroupName parameter is passed in, the configuration group dimension is used.
                                                             If the ConfGroupName parameter is not passed in, the cluster dimension is used.
                     */
                    std::string m_confGroupName;
                    bool m_confGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTSERVICECONFGROUPSINFO_H_

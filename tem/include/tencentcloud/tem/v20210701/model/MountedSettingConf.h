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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_MOUNTEDSETTINGCONF_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_MOUNTEDSETTINGCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/Pair.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Mounting configurations
                */
                class MountedSettingConf : public AbstractModel
                {
                public:
                    MountedSettingConf();
                    ~MountedSettingConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration name
                     * @return ConfigDataName Configuration name
                     */
                    std::string GetConfigDataName() const;

                    /**
                     * 设置Configuration name
                     * @param ConfigDataName Configuration name
                     */
                    void SetConfigDataName(const std::string& _configDataName);

                    /**
                     * 判断参数 ConfigDataName 是否已赋值
                     * @return ConfigDataName 是否已赋值
                     */
                    bool ConfigDataNameHasBeenSet() const;

                    /**
                     * 获取Mount point path
                     * @return MountedPath Mount point path
                     */
                    std::string GetMountedPath() const;

                    /**
                     * 设置Mount point path
                     * @param MountedPath Mount point path
                     */
                    void SetMountedPath(const std::string& _mountedPath);

                    /**
                     * 判断参数 MountedPath 是否已赋值
                     * @return MountedPath 是否已赋值
                     */
                    bool MountedPathHasBeenSet() const;

                    /**
                     * 获取Configuration content
                     * @return Data Configuration content
                     */
                    std::vector<Pair> GetData() const;

                    /**
                     * 设置Configuration content
                     * @param Data Configuration content
                     */
                    void SetData(const std::vector<Pair>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Configuration name
                     */
                    std::string m_configDataName;
                    bool m_configDataNameHasBeenSet;

                    /**
                     * Mount point path
                     */
                    std::string m_mountedPath;
                    bool m_mountedPathHasBeenSet;

                    /**
                     * Configuration content
                     */
                    std::vector<Pair> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_MOUNTEDSETTINGCONF_H_

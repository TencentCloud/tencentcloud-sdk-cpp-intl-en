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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERMOUNT_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Container mount information
                */
                class ContainerMount : public AbstractModel
                {
                public:
                    ContainerMount();
                    ~ContainerMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Mount type: `bind`.
                     * @return Type Mount type: `bind`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Mount type: `bind`.
                     * @param _type Mount type: `bind`.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Host path
                     * @return Source Host path
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Host path
                     * @param _source Host path
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Path in the container
                     * @return Destination Path in the container
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置Path in the container
                     * @param _destination Path in the container
                     * 
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取Mode
                     * @return Mode Mode
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Mode
                     * @param _mode Mode
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Read/Write permission
                     * @return RW Read/Write permission
                     * 
                     */
                    bool GetRW() const;

                    /**
                     * 设置Read/Write permission
                     * @param _rW Read/Write permission
                     * 
                     */
                    void SetRW(const bool& _rW);

                    /**
                     * 判断参数 RW 是否已赋值
                     * @return RW 是否已赋值
                     * 
                     */
                    bool RWHasBeenSet() const;

                    /**
                     * 获取Propagation type
                     * @return Propagation Propagation type
                     * 
                     */
                    std::string GetPropagation() const;

                    /**
                     * 设置Propagation type
                     * @param _propagation Propagation type
                     * 
                     */
                    void SetPropagation(const std::string& _propagation);

                    /**
                     * 判断参数 Propagation 是否已赋值
                     * @return Propagation 是否已赋值
                     * 
                     */
                    bool PropagationHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Driver
                     * @return Driver Driver
                     * 
                     */
                    std::string GetDriver() const;

                    /**
                     * 设置Driver
                     * @param _driver Driver
                     * 
                     */
                    void SetDriver(const std::string& _driver);

                    /**
                     * 判断参数 Driver 是否已赋值
                     * @return Driver 是否已赋值
                     * 
                     */
                    bool DriverHasBeenSet() const;

                private:

                    /**
                     * Mount type: `bind`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Host path
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Path in the container
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * Mode
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Read/Write permission
                     */
                    bool m_rW;
                    bool m_rWHasBeenSet;

                    /**
                     * Propagation type
                     */
                    std::string m_propagation;
                    bool m_propagationHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Driver
                     */
                    std::string m_driver;
                    bool m_driverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CONTAINERMOUNT_H_

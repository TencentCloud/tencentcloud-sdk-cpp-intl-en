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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERMOUNTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERMOUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Container mount information.
                */
                class ContainerMountItem : public AbstractModel
                {
                public:
                    ContainerMountItem();
                    ~ContainerMountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Mount type</p>
                     * @return Type <p>Mount type</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Mount type</p>
                     * @param _type <p>Mount type</p>
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
                     * 获取<p>Host path</p>
                     * @return Source <p>Host path</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Host path</p>
                     * @param _source <p>Host path</p>
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
                     * 获取<p>Path within container</p>
                     * @return Destination <p>Path within container</p>
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置<p>Path within container</p>
                     * @param _destination <p>Path within container</p>
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
                     * 获取<p>Mount mode</p>
                     * @return Mode <p>Mount mode</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Mount mode</p>
                     * @param _mode <p>Mount mode</p>
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
                     * 获取<p>Whether it is readable and writable</p>
                     * @return RW <p>Whether it is readable and writable</p>
                     * 
                     */
                    bool GetRW() const;

                    /**
                     * 设置<p>Whether it is readable and writable</p>
                     * @param _rW <p>Whether it is readable and writable</p>
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
                     * 获取<p>Spread method</p>
                     * @return Propagation <p>Spread method</p>
                     * 
                     */
                    std::string GetPropagation() const;

                    /**
                     * 设置<p>Spread method</p>
                     * @param _propagation <p>Spread method</p>
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
                     * 获取<p>Mount name</p>
                     * @return Name <p>Mount name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Mount name</p>
                     * @param _name <p>Mount name</p>
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
                     * 获取<p>Driver name</p>
                     * @return Driver <p>Driver name</p>
                     * 
                     */
                    std::string GetDriver() const;

                    /**
                     * 设置<p>Driver name</p>
                     * @param _driver <p>Driver name</p>
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
                     * <p>Mount type</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Host path</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Path within container</p>
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>Mount mode</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Whether it is readable and writable</p>
                     */
                    bool m_rW;
                    bool m_rWHasBeenSet;

                    /**
                     * <p>Spread method</p>
                     */
                    std::string m_propagation;
                    bool m_propagationHasBeenSet;

                    /**
                     * <p>Mount name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Driver name</p>
                     */
                    std::string m_driver;
                    bool m_driverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERMOUNTITEM_H_

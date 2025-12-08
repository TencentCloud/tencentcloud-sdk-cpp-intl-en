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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_DEPENDSONITEM_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_DEPENDSONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * Dependency.
                */
                class DependsOnItem : public AbstractModel
                {
                public:
                    DependsOnItem();
                    ~DependsOnItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dependency type. valid values: LandingZoneSetUp or AccountFactorySetUp. LandingZoneSetUp refers to the dependency of landingZone. AccountFactorySetUp refers to the dependency of account factory.
                     * @return Type Dependency type. valid values: LandingZoneSetUp or AccountFactorySetUp. LandingZoneSetUp refers to the dependency of landingZone. AccountFactorySetUp refers to the dependency of account factory.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Dependency type. valid values: LandingZoneSetUp or AccountFactorySetUp. LandingZoneSetUp refers to the dependency of landingZone. AccountFactorySetUp refers to the dependency of account factory.
                     * @param _type Dependency type. valid values: LandingZoneSetUp or AccountFactorySetUp. LandingZoneSetUp refers to the dependency of landingZone. AccountFactorySetUp refers to the dependency of account factory.
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
                     * 获取Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @return Identifier Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * @param _identifier Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                private:

                    /**
                     * Dependency type. valid values: LandingZoneSetUp or AccountFactorySetUp. LandingZoneSetUp refers to the dependency of landingZone. AccountFactorySetUp refers to the dependency of account factory.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies the unique identifier for the feature item, can only contain english letters, digits, and @, ,._[]-:()()[]+=., with a length of 2-128 characters.
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_DEPENDSONITEM_H_

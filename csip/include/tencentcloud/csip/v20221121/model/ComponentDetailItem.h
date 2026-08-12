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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COMPONENTDETAILITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COMPONENTDETAILITEM_H_

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
                * Associated component & path description
                */
                class ComponentDetailItem : public AbstractModel
                {
                public:
                    ComponentDetailItem();
                    ~ComponentDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component name
                     * @return Name Component name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Component name
                     * @param _name Component name
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
                     * 获取cache hit version
                     * @return Version cache hit version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置cache hit version
                     * @param _version cache hit version
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取Association path
                     * @return Path Association path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Association path
                     * @param _path Association path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Fix Command
                     * @return FixCommand Fix Command
                     * 
                     */
                    std::string GetFixCommand() const;

                    /**
                     * 设置Fix Command
                     * @param _fixCommand Fix Command
                     * 
                     */
                    void SetFixCommand(const std::string& _fixCommand);

                    /**
                     * 判断参数 FixCommand 是否已赋值
                     * @return FixCommand 是否已赋值
                     * 
                     */
                    bool FixCommandHasBeenSet() const;

                private:

                    /**
                     * Component name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * cache hit version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Association path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Fix Command
                     */
                    std::string m_fixCommand;
                    bool m_fixCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COMPONENTDETAILITEM_H_

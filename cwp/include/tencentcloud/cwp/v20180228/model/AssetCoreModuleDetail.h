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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETCOREMODULEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETCOREMODULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetCoreModuleParam.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Details of the asset management kernel module
                */
                class AssetCoreModuleDetail : public AbstractModel
                {
                public:
                    AssetCoreModuleDetail();
                    ~AssetCoreModuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Description
                     * @return Desc Description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description
                     * @param _desc Description
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Path
                     * @return Path Path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path
                     * @param _path Path
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
                     * 获取Version
                     * @return Version Version
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Version
                     * @param _version Version
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
                     * 获取Size
                     * @return Size Size
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置Size
                     * @param _size Size
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Dependent processes
                     * @return Processes Dependent processes
                     * 
                     */
                    std::string GetProcesses() const;

                    /**
                     * 设置Dependent processes
                     * @param _processes Dependent processes
                     * 
                     */
                    void SetProcesses(const std::string& _processes);

                    /**
                     * 判断参数 Processes 是否已赋值
                     * @return Processes 是否已赋值
                     * 
                     */
                    bool ProcessesHasBeenSet() const;

                    /**
                     * 获取Dependent modules
                     * @return Modules Dependent modules
                     * 
                     */
                    std::string GetModules() const;

                    /**
                     * 设置Dependent modules
                     * @param _modules Dependent modules
                     * 
                     */
                    void SetModules(const std::string& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     * 
                     */
                    bool ModulesHasBeenSet() const;

                    /**
                     * 获取Parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Params Parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetCoreModuleParam> GetParams() const;

                    /**
                     * 设置Parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _params Parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParams(const std::vector<AssetCoreModuleParam>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Version
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * Size
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Dependent processes
                     */
                    std::string m_processes;
                    bool m_processesHasBeenSet;

                    /**
                     * Dependent modules
                     */
                    std::string m_modules;
                    bool m_modulesHasBeenSet;

                    /**
                     * Parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetCoreModuleParam> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * Data update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETCOREMODULEDETAIL_H_

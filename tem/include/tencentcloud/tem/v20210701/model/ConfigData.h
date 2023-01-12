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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CONFIGDATA_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CONFIGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/TemService.h>
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
                * Configuration
                */
                class ConfigData : public AbstractModel
                {
                public:
                    ConfigData();
                    ~ConfigData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Configuration name
                     * @return Name Configuration name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Configuration name
                     * @param Name Configuration name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param CreateTime Creation time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取List of associated applications
                     * @return RelatedApplications List of associated applications
                     */
                    std::vector<TemService> GetRelatedApplications() const;

                    /**
                     * 设置List of associated applications
                     * @param RelatedApplications List of associated applications
                     */
                    void SetRelatedApplications(const std::vector<TemService>& _relatedApplications);

                    /**
                     * 判断参数 RelatedApplications 是否已赋值
                     * @return RelatedApplications 是否已赋值
                     */
                    bool RelatedApplicationsHasBeenSet() const;

                    /**
                     * 获取Configuration item
                     * @return Data Configuration item
                     */
                    std::vector<Pair> GetData() const;

                    /**
                     * 设置Configuration item
                     * @param Data Configuration item
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
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * List of associated applications
                     */
                    std::vector<TemService> m_relatedApplications;
                    bool m_relatedApplicationsHasBeenSet;

                    /**
                     * Configuration item
                     */
                    std::vector<Pair> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CONFIGDATA_H_

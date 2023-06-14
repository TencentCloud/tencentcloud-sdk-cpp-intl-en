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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ISPCOUNTER_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ISPCOUNTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ZoneInstanceInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ISP statistics
                */
                class ISPCounter : public AbstractModel
                {
                public:
                    ISPCounter();
                    ~ISPCounter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ISP name
                     * @return ProviderName ISP name
                     * 
                     */
                    std::string GetProviderName() const;

                    /**
                     * 设置ISP name
                     * @param _providerName ISP name
                     * 
                     */
                    void SetProviderName(const std::string& _providerName);

                    /**
                     * 判断参数 ProviderName 是否已赋值
                     * @return ProviderName 是否已赋值
                     * 
                     */
                    bool ProviderNameHasBeenSet() const;

                    /**
                     * 获取Number of nodes
                     * @return ProviderNodeNum Number of nodes
                     * 
                     */
                    int64_t GetProviderNodeNum() const;

                    /**
                     * 设置Number of nodes
                     * @param _providerNodeNum Number of nodes
                     * 
                     */
                    void SetProviderNodeNum(const int64_t& _providerNodeNum);

                    /**
                     * 判断参数 ProviderNodeNum 是否已赋值
                     * @return ProviderNodeNum 是否已赋值
                     * 
                     */
                    bool ProviderNodeNumHasBeenSet() const;

                    /**
                     * 获取Number of instances
                     * @return ProvederInstanceNum Number of instances
                     * 
                     */
                    int64_t GetProvederInstanceNum() const;

                    /**
                     * 设置Number of instances
                     * @param _provederInstanceNum Number of instances
                     * 
                     */
                    void SetProvederInstanceNum(const int64_t& _provederInstanceNum);

                    /**
                     * 判断参数 ProvederInstanceNum 是否已赋值
                     * @return ProvederInstanceNum 是否已赋值
                     * 
                     */
                    bool ProvederInstanceNumHasBeenSet() const;

                    /**
                     * 获取Zone instance information structure array
                     * @return ZoneInstanceInfoSet Zone instance information structure array
                     * 
                     */
                    std::vector<ZoneInstanceInfo> GetZoneInstanceInfoSet() const;

                    /**
                     * 设置Zone instance information structure array
                     * @param _zoneInstanceInfoSet Zone instance information structure array
                     * 
                     */
                    void SetZoneInstanceInfoSet(const std::vector<ZoneInstanceInfo>& _zoneInstanceInfoSet);

                    /**
                     * 判断参数 ZoneInstanceInfoSet 是否已赋值
                     * @return ZoneInstanceInfoSet 是否已赋值
                     * 
                     */
                    bool ZoneInstanceInfoSetHasBeenSet() const;

                private:

                    /**
                     * ISP name
                     */
                    std::string m_providerName;
                    bool m_providerNameHasBeenSet;

                    /**
                     * Number of nodes
                     */
                    int64_t m_providerNodeNum;
                    bool m_providerNodeNumHasBeenSet;

                    /**
                     * Number of instances
                     */
                    int64_t m_provederInstanceNum;
                    bool m_provederInstanceNumHasBeenSet;

                    /**
                     * Zone instance information structure array
                     */
                    std::vector<ZoneInstanceInfo> m_zoneInstanceInfoSet;
                    bool m_zoneInstanceInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ISPCOUNTER_H_

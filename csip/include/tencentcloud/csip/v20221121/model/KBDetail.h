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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_KBDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_KBDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulBriefInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Windows KB detailed information
                */
                class KBDetail : public AbstractModel
                {
                public:
                    KBDetail();
                    ~KBDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>KB patch internal ID (kb_info.id)</p>
                     * @return ID <p>KB patch internal ID (kb_info.id)</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>KB patch internal ID (kb_info.id)</p>
                     * @param _iD <p>KB patch internal ID (kb_info.id)</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>KB No.<br>Parameter format: e.g. KB5001234</p>
                     * @return Number <p>KB No.<br>Parameter format: e.g. KB5001234</p>
                     * 
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置<p>KB No.<br>Parameter format: e.g. KB5001234</p>
                     * @param _number <p>KB No.<br>Parameter format: e.g. KB5001234</p>
                     * 
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取<p>KB patch name</p>
                     * @return Name <p>KB patch name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>KB patch name</p>
                     * @param _name <p>KB patch name</p>
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
                     * 获取<p>Reference link (Microsoft Official Documentation address)</p>
                     * @return ReferUrl <p>Reference link (Microsoft Official Documentation address)</p>
                     * 
                     */
                    std::string GetReferUrl() const;

                    /**
                     * 设置<p>Reference link (Microsoft Official Documentation address)</p>
                     * @param _referUrl <p>Reference link (Microsoft Official Documentation address)</p>
                     * 
                     */
                    void SetReferUrl(const std::string& _referUrl);

                    /**
                     * 判断参数 ReferUrl 是否已赋值
                     * @return ReferUrl 是否已赋值
                     * 
                     */
                    bool ReferUrlHasBeenSet() const;

                    /**
                     * 获取<p>Release time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     * @return PublishTime <p>Release time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置<p>Release time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     * @param _publishTime <p>Release time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether restart is required after installing this KB<br>Enumeration values:<br>true: required<br>false: not required</p>
                     * @return NeedRestart <p>Whether restart is required after installing this KB<br>Enumeration values:<br>true: required<br>false: not required</p>
                     * 
                     */
                    bool GetNeedRestart() const;

                    /**
                     * 设置<p>Whether restart is required after installing this KB<br>Enumeration values:<br>true: required<br>false: not required</p>
                     * @param _needRestart <p>Whether restart is required after installing this KB<br>Enumeration values:<br>true: required<br>false: not required</p>
                     * 
                     */
                    void SetNeedRestart(const bool& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取<p>Associated vulnerability list</p>
                     * @return RelateVulList <p>Associated vulnerability list</p>
                     * 
                     */
                    std::vector<VulBriefInfo> GetRelateVulList() const;

                    /**
                     * 设置<p>Associated vulnerability list</p>
                     * @param _relateVulList <p>Associated vulnerability list</p>
                     * 
                     */
                    void SetRelateVulList(const std::vector<VulBriefInfo>& _relateVulList);

                    /**
                     * 判断参数 RelateVulList 是否已赋值
                     * @return RelateVulList 是否已赋值
                     * 
                     */
                    bool RelateVulListHasBeenSet() const;

                    /**
                     * 获取<p>Total number of associated vulnerabilities</p>
                     * @return RelateVulCount <p>Total number of associated vulnerabilities</p>
                     * 
                     */
                    int64_t GetRelateVulCount() const;

                    /**
                     * 设置<p>Total number of associated vulnerabilities</p>
                     * @param _relateVulCount <p>Total number of associated vulnerabilities</p>
                     * 
                     */
                    void SetRelateVulCount(const int64_t& _relateVulCount);

                    /**
                     * 判断参数 RelateVulCount 是否已赋值
                     * @return RelateVulCount 是否已赋值
                     * 
                     */
                    bool RelateVulCountHasBeenSet() const;

                    /**
                     * 获取<p>Associated os version</p>
                     * @return RelateProduct <p>Associated os version</p>
                     * 
                     */
                    std::string GetRelateProduct() const;

                    /**
                     * 设置<p>Associated os version</p>
                     * @param _relateProduct <p>Associated os version</p>
                     * 
                     */
                    void SetRelateProduct(const std::string& _relateProduct);

                    /**
                     * 判断参数 RelateProduct 是否已赋值
                     * @return RelateProduct 是否已赋值
                     * 
                     */
                    bool RelateProductHasBeenSet() const;

                private:

                    /**
                     * <p>KB patch internal ID (kb_info.id)</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>KB No.<br>Parameter format: e.g. KB5001234</p>
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * <p>KB patch name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Reference link (Microsoft Official Documentation address)</p>
                     */
                    std::string m_referUrl;
                    bool m_referUrlHasBeenSet;

                    /**
                     * <p>Release time<br>Parameter format: YYYY-MM-DD HH:mm:ss</p>
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * <p>Whether restart is required after installing this KB<br>Enumeration values:<br>true: required<br>false: not required</p>
                     */
                    bool m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * <p>Associated vulnerability list</p>
                     */
                    std::vector<VulBriefInfo> m_relateVulList;
                    bool m_relateVulListHasBeenSet;

                    /**
                     * <p>Total number of associated vulnerabilities</p>
                     */
                    int64_t m_relateVulCount;
                    bool m_relateVulCountHasBeenSet;

                    /**
                     * <p>Associated os version</p>
                     */
                    std::string m_relateProduct;
                    bool m_relateProductHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_KBDETAIL_H_

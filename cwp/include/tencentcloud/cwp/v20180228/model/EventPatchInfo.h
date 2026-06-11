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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EVENTPATCHINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EVENTPATCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Patch details
                */
                class EventPatchInfo : public AbstractModel
                {
                public:
                    EventPatchInfo();
                    ~EventPatchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Patch name
                     * @return Name Patch name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Patch name
                     * @param _name Patch name
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
                     * 获取Patch Number
                     * @return KbNo Patch Number
                     * 
                     */
                    std::string GetKbNo() const;

                    /**
                     * 设置Patch Number
                     * @param _kbNo Patch Number
                     * 
                     */
                    void SetKbNo(const std::string& _kbNo);

                    /**
                     * 判断参数 KbNo 是否已赋值
                     * @return KbNo 是否已赋值
                     * 
                     */
                    bool KbNoHasBeenSet() const;

                    /**
                     * 获取Disclosure time
                     * @return PublishTime Disclosure time
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置Disclosure time
                     * @param _publishTime Disclosure time
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
                     * 获取Number of affected hosts.
                     * @return EffectHostCount Number of affected hosts.
                     * 
                     */
                    uint64_t GetEffectHostCount() const;

                    /**
                     * 设置Number of affected hosts.
                     * @param _effectHostCount Number of affected hosts.
                     * 
                     */
                    void SetEffectHostCount(const uint64_t& _effectHostCount);

                    /**
                     * 判断参数 EffectHostCount 是否已赋值
                     * @return EffectHostCount 是否已赋值
                     * 
                     */
                    bool EffectHostCountHasBeenSet() const;

                    /**
                     * 获取Number of associated vulnerabilities
                     * @return RelateVulCount Number of associated vulnerabilities
                     * 
                     */
                    uint64_t GetRelateVulCount() const;

                    /**
                     * 设置Number of associated vulnerabilities
                     * @param _relateVulCount Number of associated vulnerabilities
                     * 
                     */
                    void SetRelateVulCount(const uint64_t& _relateVulCount);

                    /**
                     * 判断参数 RelateVulCount 是否已赋值
                     * @return RelateVulCount 是否已赋值
                     * 
                     */
                    bool RelateVulCountHasBeenSet() const;

                    /**
                     * 获取Associated vulnerability ID array
                     * @return RelateVulList Associated vulnerability ID array
                     * 
                     */
                    std::vector<std::string> GetRelateVulList() const;

                    /**
                     * 设置Associated vulnerability ID array
                     * @param _relateVulList Associated vulnerability ID array
                     * 
                     */
                    void SetRelateVulList(const std::vector<std::string>& _relateVulList);

                    /**
                     * 判断参数 RelateVulList 是否已赋值
                     * @return RelateVulList 是否已赋值
                     * 
                     */
                    bool RelateVulListHasBeenSet() const;

                    /**
                     * 获取Whether it is the latest disclosure [0: no | 1: yes], no by default
                     * @return IsNew Whether it is the latest disclosure [0: no | 1: yes], no by default
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置Whether it is the latest disclosure [0: no | 1: yes], no by default
                     * @param _isNew Whether it is the latest disclosure [0: no | 1: yes], no by default
                     * 
                     */
                    void SetIsNew(const int64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取Last scan time
                     * @return LastScanTime Last scan time
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last scan time
                     * @param _lastScanTime Last scan time
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取0 pending, 1 ignored, 3 fixed
                     * @return Status 0 pending, 1 ignored, 3 fixed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0 pending, 1 ignored, 3 fixed
                     * @param _status 0 pending, 1 ignored, 3 fixed
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Prerequisite for installing the kb is generally other KBs, and there may be multiple, with KBs separated by ", "
                     * @return KbPreCondition Prerequisite for installing the kb is generally other KBs, and there may be multiple, with KBs separated by ", "
                     * 
                     */
                    std::string GetKbPreCondition() const;

                    /**
                     * 设置Prerequisite for installing the kb is generally other KBs, and there may be multiple, with KBs separated by ", "
                     * @param _kbPreCondition Prerequisite for installing the kb is generally other KBs, and there may be multiple, with KBs separated by ", "
                     * 
                     */
                    void SetKbPreCondition(const std::string& _kbPreCondition);

                    /**
                     * 判断参数 KbPreCondition 是否已赋值
                     * @return KbPreCondition 是否已赋值
                     * 
                     */
                    bool KbPreConditionHasBeenSet() const;

                    /**
                     * 获取Name of the windows product associated with the kb
                     * @return RelatedProduct Name of the windows product associated with the kb
                     * 
                     */
                    std::string GetRelatedProduct() const;

                    /**
                     * 设置Name of the windows product associated with the kb
                     * @param _relatedProduct Name of the windows product associated with the kb
                     * 
                     */
                    void SetRelatedProduct(const std::string& _relatedProduct);

                    /**
                     * 判断参数 RelatedProduct 是否已赋值
                     * @return RelatedProduct 是否已赋值
                     * 
                     */
                    bool RelatedProductHasBeenSet() const;

                    /**
                     * 获取Patch ID
                     * @return KbId Patch ID
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 设置Patch ID
                     * @param _kbId Patch ID
                     * 
                     */
                    void SetKbId(const uint64_t& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取Related kb event id collection
                     * @return Ids Related kb event id collection
                     * 
                     */
                    std::string GetIds() const;

                    /**
                     * 设置Related kb event id collection
                     * @param _ids Related kb event id collection
                     * 
                     */
                    void SetIds(const std::string& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * Patch name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Patch Number
                     */
                    std::string m_kbNo;
                    bool m_kbNoHasBeenSet;

                    /**
                     * Disclosure time
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * Number of affected hosts.
                     */
                    uint64_t m_effectHostCount;
                    bool m_effectHostCountHasBeenSet;

                    /**
                     * Number of associated vulnerabilities
                     */
                    uint64_t m_relateVulCount;
                    bool m_relateVulCountHasBeenSet;

                    /**
                     * Associated vulnerability ID array
                     */
                    std::vector<std::string> m_relateVulList;
                    bool m_relateVulListHasBeenSet;

                    /**
                     * Whether it is the latest disclosure [0: no | 1: yes], no by default
                     */
                    int64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * Last scan time
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 0 pending, 1 ignored, 3 fixed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Prerequisite for installing the kb is generally other KBs, and there may be multiple, with KBs separated by ", "
                     */
                    std::string m_kbPreCondition;
                    bool m_kbPreConditionHasBeenSet;

                    /**
                     * Name of the windows product associated with the kb
                     */
                    std::string m_relatedProduct;
                    bool m_relatedProductHasBeenSet;

                    /**
                     * Patch ID
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * Related kb event id collection
                     */
                    std::string m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EVENTPATCHINFO_H_

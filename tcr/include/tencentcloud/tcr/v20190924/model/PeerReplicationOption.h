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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_PEERREPLICATIONOPTION_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_PEERREPLICATIONOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Parameters for cross-account synchronization
                */
                class PeerReplicationOption : public AbstractModel
                {
                public:
                    PeerReplicationOption();
                    ~PeerReplicationOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取UIN of the destination instance
                     * @return PeerRegistryUin UIN of the destination instance
                     */
                    std::string GetPeerRegistryUin() const;

                    /**
                     * 设置UIN of the destination instance
                     * @param PeerRegistryUin UIN of the destination instance
                     */
                    void SetPeerRegistryUin(const std::string& _peerRegistryUin);

                    /**
                     * 判断参数 PeerRegistryUin 是否已赋值
                     * @return PeerRegistryUin 是否已赋值
                     */
                    bool PeerRegistryUinHasBeenSet() const;

                    /**
                     * 获取Permanent access Token for the destination instance
                     * @return PeerRegistryToken Permanent access Token for the destination instance
                     */
                    std::string GetPeerRegistryToken() const;

                    /**
                     * 设置Permanent access Token for the destination instance
                     * @param PeerRegistryToken Permanent access Token for the destination instance
                     */
                    void SetPeerRegistryToken(const std::string& _peerRegistryToken);

                    /**
                     * 判断参数 PeerRegistryToken 是否已赋值
                     * @return PeerRegistryToken 是否已赋值
                     */
                    bool PeerRegistryTokenHasBeenSet() const;

                    /**
                     * 获取Whether to enable cross-account synchronization
                     * @return EnablePeerReplication Whether to enable cross-account synchronization
                     */
                    bool GetEnablePeerReplication() const;

                    /**
                     * 设置Whether to enable cross-account synchronization
                     * @param EnablePeerReplication Whether to enable cross-account synchronization
                     */
                    void SetEnablePeerReplication(const bool& _enablePeerReplication);

                    /**
                     * 判断参数 EnablePeerReplication 是否已赋值
                     * @return EnablePeerReplication 是否已赋值
                     */
                    bool EnablePeerReplicationHasBeenSet() const;

                private:

                    /**
                     * UIN of the destination instance
                     */
                    std::string m_peerRegistryUin;
                    bool m_peerRegistryUinHasBeenSet;

                    /**
                     * Permanent access Token for the destination instance
                     */
                    std::string m_peerRegistryToken;
                    bool m_peerRegistryTokenHasBeenSet;

                    /**
                     * Whether to enable cross-account synchronization
                     */
                    bool m_enablePeerReplication;
                    bool m_enablePeerReplicationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_PEERREPLICATIONOPTION_H_
